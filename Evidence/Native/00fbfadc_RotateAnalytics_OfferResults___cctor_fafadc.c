/* IL2CPP: RotateAnalytics.OfferResults$$.cctor
void RotateAnalytics_OfferResults___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RotateAnalytics.OfferResults$$.cctor
   void RotateAnalytics_OfferResults___cctor (const MethodInfo* method); */

void RotateAnalytics_OfferResults___cctor_fafadc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fbfc0c + 0xfbfaec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc10 + 0xfbfb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc14 + 0xfbfb0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc18 + 0xfbfb18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc1c + 0xfbfb24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc20 + 0xfbfb30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc24 + 0xfbfb3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbfc28 + 0xfbfb48));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_00fbfc2c + 0xfbfb5c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_00fbfc30 + 0xfbfb6c);
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = **(undefined4 **)(_UNK_00fbfc34 + 0xfbfb90);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = **(undefined4 **)(_UNK_00fbfc38 + 0xfbfbac);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = **(undefined4 **)(_UNK_00fbfc3c + 0xfbfbc8);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = **(undefined4 **)(_UNK_00fbfc40 + 0xfbfbe4);
  thunk_FUN_00ec5080();
  puVar3 = (undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14);
  *puVar3 = **(undefined4 **)(_UNK_00fbfc44 + 0xfbfc00);
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

