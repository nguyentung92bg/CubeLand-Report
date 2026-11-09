/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<object>
bool Rotatelab_Utilities__TryChangeValue_object_ (Il2CppObject** currentValue, Il2CppObject* newValue, const MethodInfo_1663E28* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Utilities$$TryChangeValue<object>
   bool Rotatelab_Utilities__TryChangeValue_object_ (Il2CppObject** currentValue, Il2CppObject*
   newValue, const MethodInfo_1663E28* method); */

uint Rotatelab_Utilities__TryChangeValue_object__1663e28
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
  piVar2 = (int *)FUN_013a7998(*puVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar2 + 0x100))(piVar2,*param_1,param_2,*(undefined4 *)(*piVar2 + 0x104));
  if (uVar3 == 0) {
    *param_1 = param_2;
    thunk_FUN_00ec5080(param_1,param_2);
  }
  return uVar3 ^ 1;
}

