/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<ProcessPurchase>b__25_0
bool Rotatelab_IAP_PurchasesListener___c___ProcessPurchase_b__25_0 (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c$$<ProcessPurchase>b__25_0
   bool Rotatelab_IAP_PurchasesListener___c___ProcessPurchase_b__25_0
   (Rotatelab_IAP_PurchasesListener___c_o* __this, const MethodInfo* method); */

uint Rotatelab_IAP_PurchasesListener___c___ProcessPurchase_b__25_0_109bedc(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010abf58 + 0x10abeec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abf5c + 0x10abf00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abf60 + 0x10abf0c));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010abf64 + 0x10abf20));
  uVar3 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_010abf68 + 0x10abf34) + 0x74) == 0) {
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

