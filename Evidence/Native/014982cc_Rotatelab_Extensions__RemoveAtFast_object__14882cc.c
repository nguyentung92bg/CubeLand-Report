/* IL2CPP: Rotatelab.Extensions$$RemoveAtFast<object>
void Rotatelab_Extensions__RemoveAtFast_object_ (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_14882CC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$RemoveAtFast<object>
   void Rotatelab_Extensions__RemoveAtFast_object_ (System_Collections_Generic_List_T__o* list,
   int32_t index, const MethodInfo_14882CC* method); */

void Rotatelab_Extensions__RemoveAtFast_object__14882cc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar4;
  undefined4 unaff_lr;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = iVar3 - 1;
  uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (param_1,uVar4,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8));
  System_Collections_Generic_List_object___set_Item_267d860
            (param_1,param_2,uVar1,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x10));
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 <= uVar4) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
              (0,uVar4,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x14));
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  uVar2 = uVar2 - 1;
  *(uint *)(param_1 + 0xc) = uVar2;
  if ((int)uVar4 < (int)uVar2) {
    System_Array__Copy_2b96ff4
              (*(undefined4 *)(param_1 + 8),iVar3,*(undefined4 *)(param_1 + 8),uVar4,uVar2 - uVar4,0
               ,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + uVar2 * 4 + 0x10) = 0;
  thunk_FUN_00ec5080();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

