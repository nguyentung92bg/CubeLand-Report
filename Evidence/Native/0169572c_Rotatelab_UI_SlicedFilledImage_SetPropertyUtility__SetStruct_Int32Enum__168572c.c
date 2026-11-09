/* IL2CPP: Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetStruct<Int32Enum>
bool Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_Int32Enum_ (int32_t* currentValue, int32_t newValue, const MethodInfo_168572C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetStruct<Int32Enum>
   bool Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_Int32Enum_ (int32_t*
   currentValue, int32_t newValue, const MethodInfo_168572C* method); */

uint Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_Int32Enum__168572c
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 **)(param_3 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00efd7c4(param_3);
    puVar1 = *(undefined4 **)(param_3 + 0x1c);
  }
  piVar2 = (int *)FUN_013a77d0(*puVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar2 + 0x100))(piVar2,*param_1,param_2,*(undefined4 *)(*piVar2 + 0x104));
  if (uVar3 == 0) {
    *param_1 = param_2;
  }
  return uVar3 ^ 1;
}

