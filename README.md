# KnowPulse Views
Contains KnowPulse-specific Views.

** Not tested on generic Tripal sites; May require KnowPulse-specific configuration **

## Feature Views
* Sequence Search: Provides a search for residue-containing features.
* Variant Search: Provides a search for sequence variants.
* Marker Search: Provides a search for markers.
* Genotype Search: Allows users to compare genotypes of germplasm of interest in a user-specific marker by germplasm matrix.
* Germplasm Genotyped List: A list of the germplasm for which there is genotypic data.

## Germplasm Views
All of the following views are filtered first by genus through a views arguement (genus is provided in the URL). Since researchers rarely want to search more than one crop at a time and names are not unique across crops, this method requires less input from the user and causes less confusion.
* Germplasm Search: Provides a search of all the germplasm for a given genus.
* Variety Search: Provides a search of all the varieties (stocks of type: variety) for a given genus.
* RIL Search: Provides a searchable list of all the recommbinant imbred lines (RILs) in KnowPulse.
* Cross Search: Provides a search of all the crosses created as part of the UofS Pulse breeding program.

## UofS Research Views
* Publications
* Projects
* Research Areas
* Crop Species
* Model Organism Species
* Wild Species

## Views embeded in Nodes/Pages
* Pie Charts
  * Genotype Proportion on feature (markers and variants) pages
  * Feature Types on organism pages
  * Stock Types on organism pages

## Handlers
* Project Select List Filter

