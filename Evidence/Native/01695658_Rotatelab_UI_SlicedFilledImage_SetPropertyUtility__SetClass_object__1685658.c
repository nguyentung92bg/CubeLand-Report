/* IL2CPP: Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetClass<object>
bool Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetClass_object_ (Il2CppObject** currentValue, Il2CppObject* newValue, const MethodInfo_1685658* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.SlicedFilledImage.SetPropertyUtility$$SetClass<object>
   bool Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetClass_object_ (Il2CppObject**
   currentValue, Il2CppObject* newValue, const MethodInfo_1685658* method); */

undefined4
Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetClass_object__1685658
          (int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)*param_1;
  uVar3 = 0;
  if ((param_2 != 0 || piVar1 != (int *)0x0) &&
     ((piVar1 == (int *)0x0 ||
      (iVar2 = (**(code **)(*piVar1 + 0xc0))(piVar1,param_2,*(undefined4 *)(*piVar1 + 0xc4)),
      iVar2 == 0)))) {
    *param_1 = param_2;
    thunk_FUN_00ec5080(param_1,param_2);
    uVar3 = 1;
  }
  return uVar3;
}

