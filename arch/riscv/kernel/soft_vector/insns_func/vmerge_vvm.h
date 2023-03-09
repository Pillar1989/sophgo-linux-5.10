// vmerge.vvm *vd, vs2, vs1
VI_VVXI_MERGE_LOOP
({
  int midx = (VECTOR->vmlen * i) / 64;
  int mpos = (VECTOR->vmlen * i) % 64;
  bool use_first = (*vector_elt_uint64_t(VECTOR, 0, midx) >> mpos) & 0x1;

  *vd =use_first ? vs1 : vs2;
})
