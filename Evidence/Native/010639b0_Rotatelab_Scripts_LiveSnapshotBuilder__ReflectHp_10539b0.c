/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ReflectHp
int32_t Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp (System_Reflection_FieldInfo_o* field, Il2CppObject* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ReflectHp
   int32_t Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp (System_Reflection_FieldInfo_o* field,
   Il2CppObject* instance, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(**(code **)(*param_1 + 400))(param_1,param_2,*(undefined4 *)(*param_1 + 0x194));
  iVar3 = *(int *)(*(int *)(iRam01063a2c + 0x10639f4) + 0x24);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar1 + 0x20) == *(int *)(iVar3 + 0x20)) {
    puVar2 = (undefined4 *)FUN_00ec3940(piVar1);
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(piVar1,iVar3);
}

