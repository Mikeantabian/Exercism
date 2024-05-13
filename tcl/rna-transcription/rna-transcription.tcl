proc to-rna {dna} {
    set rna ""
    foreach nucleotide [split $dna ""] {
        switch -exact -- $nucleotide {
            G {append rna "C"}
            C {append rna "G"}
            T {append rna "A"}
            A {append rna "U"}
        }
    }
    return $rna
}