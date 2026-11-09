/* IL2CPP: Rotatelab.IAP.PurchasesListener$$SetPriceText
void Rotatelab_IAP_PurchasesListener__SetPriceText (Rotatelab_IAP_PurchasesListener_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$SetPriceText
   void Rotatelab_IAP_PurchasesListener__SetPriceText (Rotatelab_IAP_PurchasesListener_o* __this,
   Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_010aa580 + 0x10aa400);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa584 + 0x10aa414));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa588 + 0x10aa420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa58c + 0x10aa42c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa590 + 0x10aa438));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_010aa594 + 0x10aa458) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar7,0,0);
  if (iVar2 == 0) {
    iVar2 = Rotatelab_IAP_PurchasesListener__GetProduct_1099e40
                      (param_1,*(undefined4 *)(param_2 + 8));
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x10);
      iVar7 = iVar2;
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = *(int **)(*(int *)(param_2 + 0x10) + 0x14);
      if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0xc) + 8);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar5 + 0x2b0);
      uVar4 = *(undefined4 *)(*piVar5 + 0x2b4);
    }
    else {
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar3 = System_String__Concat_29fee38
                          (**(undefined4 **)(_UNK_010aa598 + 0x10aa4c0),*(undefined4 *)(param_2 + 8)
                           ,0);
        if (*(int *)(**(int **)(_UNK_010aa59c + 0x10aa4d8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__LogWarning_35b0090(uVar3,0);
      }
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = *(int **)(*(int *)(param_2 + 0x10) + 0x14);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar5 + 0x2b0);
      uVar4 = *(undefined4 *)(*piVar5 + 0x2b4);
      uVar3 = **(undefined4 **)(_UNK_010aa5a0 + 0x10aa52c);
    }
                    /* WARNING: Could not recover jumptable at 0x010aa57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(piVar5,uVar3,uVar4);
    return;
  }
  return;
}

