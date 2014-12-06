## Islandora Taxonomy Autocompletes

A while back I wrote a [post](https://groups.google.com/forum/#!topic/islandora/O5bXlqeAVoc) about some experiments I had done using Drupal taxonomies with the Islandora XML Form Builder form fields. Jennifer (UCONN) wrote up more detailed instructions and made [those instructions available](https://drive.google.com/viewerng/viewer?a=v&pid=forums&srcid=MTY4ODQyNjYxMDAxMTY4NzgyMTEBMDY0NzQyNDQ4ODAxMDYxMDE3MDcBTFJmNGFMV0Nyc29KATAuMQEBdjI&u=0).

To provide users with a quick start I've created a series of Drupal taxonomies 
and a content type (Islandora Autocompletes) to hold all the fields' machine names so that they can be included as autocompletes. 
I then bundled these up using Drupal's [Features Module](http://drupal.org/project/features).  
Here is a list of taxonomies included, authority source, the associated MODS element, the machine name for inclusion in the XML Form Builder form.  If you have other authorities you'd like to include, let me know by posting an issue or 

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy | Basic Genre Terms for Cultural Heritage Materials |
| Authority  | http://memory.loc.gov/ammem/techdocs/genre.html |
| MODS XPATH | /mods/genre[@authority='bgtchm'] |
| Machine Name | field_genre_bgtchm  |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy | MARC Genre Terms |
| Authority  | http://www.loc.gov/standards/valuelist/marcgt.html |
| MODS XPATH | /mods/genre[@authority='marcgt'] |
| Machine Name | field_genre_marcgt  |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy | Moving Image Genre Form Guide |
| Authority  | http://www.loc.gov/rr/mopic/miggen.html |
| MODS XPATH | /mods/genre[@authority='migfg'] |
| Machine Name | field_genre_migfg  |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy | rdacontent |
| Authority  | http://www.loc.gov/standards/valuelist/rdacontent.html |
| MODS XPATH | /mods/genre[@authroity='rdacontent'] |
| Machine Name | field_rda_content |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy | MARC Code List for Languages |
| Authority  | http://www.loc.gov/standards/iso639-2/ |
| MODS XPATH |/mods/language/languageTerm[@type='type' and @authority='iso639-2b']  |
| Machine Name | field_language_iso639_b  |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy |  MARC Code List for Relators  |
| Authority  | http://www.loc.gov/marc/relators/relaterm.html |
| MODS XPATH | /mods/name/role/roleTerm[@type='text' and @authority='marcrelator'] |
| Machine Name |  field_marc_relators |

|  | **Description** |
|----------|-----------------------------------------------------------|
| Taxonomy |  |
| Authority  |  |
| MODS XPATH |  |
| Machine Name |   |

mods name role roleterm authority marcrelator

mods note type

mods origininfo frequency

mods physicaldescription form authority marccategory

mods physicaldescription note type

mods subject hierarchicalGeographic country authority iso3166-2

mods subject hierarchicalGeographic province

mods subject hierarchicalGeographic state

mods targetAudience authority marctarget


Here are some sample steps for creating your own taxonomy.

1. create a taxonomy in drupal /admin/structure/taxonomy   ... for the proof of concept I used the values for the mods:typeOfResource element [taxonomy1.png] and then created a few more for other elements I typically use [taxonomy2.png].

![alt text](https://groups.google.com/group/islandora/attach/ba970abe2f7fc2c3/taxonomy1.png?part=0.2&authuser=0&view=1 "Taxonomy 1")
2. create a content type that includes the taxonomies you've created - admin/structure/types.  I created a content type called islandora autocomplete fields and added my taxonomies to that content type.  I'm not using that content type for anything other that generating the fields for the taxonomies.[taxonomy3.png].

3 create a textfield form element in your form, for that element select the Advanced Form Controls, then in the Autocomplete Path enter the machine name of the field you added to your content type. For me it is taxonomy/autocomplete/field_typeofresource .[taxonomy4.png]

4. test your form. [taxonomy5.png]
