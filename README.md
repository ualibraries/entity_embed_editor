# Entity Embed for Drupal 7

A text format for Drupal 7 which uses Entity Embed for handling inline images

## Getting started

* Download and install the dependencies (`example.make` might be helpful)
* Patch Entity Embed (https://www.drupal.org/node/2831939#comment-12122646)
* Enable the `entity_embed_editor` feature
* Try out the `Editor` text format

## Dependencies

* Features `features-7.x-2.10`
* Entity Embed `entity_embed-7.x-3.x-dev`
* Editor `editor-7.x-1.0-alpha7`
* Entity `entity-7.x-1.8`
* Entity Reference `entityreference-7.x-1.2`
* File Entity `file_entity-7.x-2.0-beta3`

## Patches

Entity Embed needs to be patched for `data-align` to work. See https://www.drupal.org/node/2831939#comment-12122646.

## Filter order

* Align images
* View mode classes
* Entity link
* Convert image captions to figures and figcaption elements
* Render embedded entities
* Limit allowed HTML tags

## Using the included makefile

Move `example.make` to the root of an existing Drupal 7 site and run `drush make --no-core example.make`
