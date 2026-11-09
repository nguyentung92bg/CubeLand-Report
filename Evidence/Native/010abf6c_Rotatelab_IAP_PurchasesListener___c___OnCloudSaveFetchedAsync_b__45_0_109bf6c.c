/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<OnCloudSaveFetchedAsync>b__45_0
bool Rotatelab_IAP_PurchasesListener___c___OnCloudSaveFetchedAsync_b__45_0 (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<OnCloudSaveFetchedAsync>b__45_0
   bool Rotatelab_IAP_PurchasesListener___c___OnCloudSaveFetchedAsync_b__45_0
   (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method); */

uint Rotatelab_IAP_PurchasesListener___c___OnCloudSaveFetchedAsync_b__45_0_109bf6c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010abfe8 + 0x10abf7c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abfec + 0x10abf90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abff0 + 0x10abf9c));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010abff4 + 0x10abfb0));
  uVar3 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_010abff8 + 0x10abfc4) + 0x74) == 0) {
    FUN_00ec3934();
    uVar3 = extraout_r3_00;
  }
  pcVar4 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,uVar3,unaff_r4);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar1,0);
  return uVar2 ^ 1;
}

