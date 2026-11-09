/* IL2CPP: Rotatelab.Save.SavedList<int>$$get_Item
int32_t Rotatelab_Save_SavedList_int___get_Item (Rotatelab_Save_SavedList_int__o* __this, int32_t index, const MethodInfo_1A89E38* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<int>$$get_Item
   int32_t Rotatelab_Save_SavedList_int___get_Item (Rotatelab_Save_SavedList_int__o* __this, int32_t
   index, const MethodInfo_1A89E38* method); */

undefined4 Rotatelab_Save_SavedList_int___get_Item_1a89e38(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
              (0,param_2,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0xc),
               extraout_r3,unaff_r4,unaff_r5);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
}

