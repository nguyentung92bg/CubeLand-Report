/* IL2CPP: Rotatelab.Ads.AdNotReadyController.<>c$$.cctor
void Rotatelab_Ads_AdNotReadyController___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdNotReadyController.<>c$$.cctor
   void Rotatelab_Ads_AdNotReadyController___c___cctor (const MethodInfo* method); */

void Rotatelab_Ads_AdNotReadyController___c___cctor_10f9d08(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01109d70 + 0x1109d18);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109d74 + 0x1109d2c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01109d78 + 0x1109d40);
  uVar3 = thunk_FUN_00f00cdc(*piVar5);
  System_Object___ctor_2bb93bc(uVar3,0);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar5 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar5 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

