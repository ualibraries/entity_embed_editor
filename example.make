; example makefile
; ----------------
; See: https://github.com/drush-ops/drush/blob/8.x/examples/example.make

core = 7.x
api = 2

projects[drupal][version] = 7.55
projects[drupal][overwrite] = TRUE

projects[entity][version] = 1.8
projects[entityreference][version] = 1.2
projects[file_entity][version] = 2.0-beta3
projects[editor][version] = 1.0-alpha7
projects[entity_embed][version] = 3.x-dev
; Patch fixes data-align filter (https://www.drupal.org/node/2831939)
projects[entity_embed][patch][2831939-1][url] = "https://www.drupal.org/files/issues/data_align-2831939-1.patch"
