/* IL2CPP: Rotatelab.ObservableValue<long>$$Equals
bool Rotatelab_ObservableValue_long___Equals (Rotatelab_ObservableValue_long__o* __this, Il2CppObject* obj, const MethodInfo_185D92C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<long>$$Equals
   bool Rotatelab_ObservableValue_long___Equals (Rotatelab_ObservableValue_long__o* __this,
   Il2CppObject* obj, const MethodInfo_185D92C* method); */

undefined4 Rotatelab_ObservableValue_long___Equals_185d92c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (param_2 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1)) {
      piVar2 = (int *)func_0x016f9c40(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 8)
                                     );
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
      uVar6 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
      if (piVar2 != (int *)0x0) {
        pcVar4 = *(code **)(*piVar2 + 0x100);
        uVar3 = (*pcVar4)(piVar2,pcVar4,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar6,
                          *(undefined4 *)(*piVar2 + 0x104));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return 0;
}

