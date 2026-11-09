/* IL2CPP: RotateAnalytics.OfferTypes$$.cctor
void RotateAnalytics_OfferTypes___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RotateAnalytics.OfferTypes$$.cctor
   void RotateAnalytics_OfferTypes___cctor (const MethodInfo* method); */

void RotateAnalytics_OfferTypes___cctor_faf910(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fbfa90 + 0xfbf920);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfa94 + 0xfbf934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfa98 + 0xfbf940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfa9c + 0xfbf94c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfaa0 + 0xfbf958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfaa4 + 0xfbf964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfaa8 + 0xfbf970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfaac + 0xfbf97c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfab0 + 0xfbf988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfab4 + 0xfbf994));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_00fbfab8 + 0xfbf9a8);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_00fbfabc + 0xfbf9b8);
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = **(undefined4 **)(_UNK_00fbfac0 + 0xfbf9dc);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = **(undefined4 **)(_UNK_00fbfac4 + 0xfbf9f8);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = **(undefined4 **)(_UNK_00fbfac8 + 0xfbfa14);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = **(undefined4 **)(_UNK_00fbfacc + 0xfbfa30);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = **(undefined4 **)(_UNK_00fbfad0 + 0xfbfa4c);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = **(undefined4 **)(_UNK_00fbfad4 + 0xfbfa68);
  thunk_FUN_00ec5080();
  puVar3 = (undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c);
  *puVar3 = **(undefined4 **)(_UNK_00fbfad8 + 0xfbfa84);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

