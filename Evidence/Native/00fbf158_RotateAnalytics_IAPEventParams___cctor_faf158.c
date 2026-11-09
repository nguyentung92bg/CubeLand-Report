/* IL2CPP: RotateAnalytics.IAPEventParams$$.cctor
void RotateAnalytics_IAPEventParams___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RotateAnalytics.IAPEventParams$$.cctor
   void RotateAnalytics_IAPEventParams___cctor (const MethodInfo* method); */

void RotateAnalytics_IAPEventParams___cctor_faf158(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fbf378 + 0xfbf168);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf37c + 0xfbf17c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf380 + 0xfbf188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf384 + 0xfbf194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf388 + 0xfbf1a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf38c + 0xfbf1ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf390 + 0xfbf1b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf394 + 0xfbf1c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf398 + 0xfbf1d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf39c + 0xfbf1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf3a0 + 0xfbf1e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf3a4 + 0xfbf1f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf3a8 + 0xfbf200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbf3ac + 0xfbf20c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_00fbf3b0 + 0xfbf220);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_00fbf3b4 + 0xfbf230);
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = **(undefined4 **)(_UNK_00fbf3b8 + 0xfbf254);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = **(undefined4 **)(_UNK_00fbf3bc + 0xfbf270);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = **(undefined4 **)(_UNK_00fbf3c0 + 0xfbf28c);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = **(undefined4 **)(_UNK_00fbf3c4 + 0xfbf2a8);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = **(undefined4 **)(_UNK_00fbf3c8 + 0xfbf2c4);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = **(undefined4 **)(_UNK_00fbf3cc + 0xfbf2e0);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = **(undefined4 **)(_UNK_00fbf3d0 + 0xfbf2fc);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = **(undefined4 **)(_UNK_00fbf3d4 + 0xfbf318);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = **(undefined4 **)(_UNK_00fbf3d8 + 0xfbf334);
  thunk_FUN_00ec5080();
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x28) = **(undefined4 **)(_UNK_00fbf3dc + 0xfbf350);
  thunk_FUN_00ec5080();
  puVar3 = (undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x2c);
  *puVar3 = **(undefined4 **)(_UNK_00fbf3e0 + 0xfbf36c);
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

