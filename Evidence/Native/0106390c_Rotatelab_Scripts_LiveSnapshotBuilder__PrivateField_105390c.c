/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$PrivateField
System_Reflection_FieldInfo_o* Rotatelab_Scripts_LiveSnapshotBuilder__PrivateField (System_Type_o* type, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$PrivateField
   System_Reflection_FieldInfo_o* Rotatelab_Scripts_LiveSnapshotBuilder__PrivateField
   (System_Type_o* type, System_String_o* name, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder__PrivateField_105390c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*param_1 + 0x368))(param_1,param_2,0x34,*(undefined4 *)(*param_1 + 0x36c));
  if (iVar1 != 0) {
    return;
  }
  FUN_00b87610(param_1);
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010639a8 + 0x1063974));
  uVar3 = thunk_FUN_00f00cdc();
  System_MissingFieldException___ctor_2b96274(uVar3,uVar2,param_2,0);
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010639ac + 0x1063998));
  func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

