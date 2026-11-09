/* IL2CPP: Rotatelab.ObservableValue<long>$$set_Value
void Rotatelab_ObservableValue_long___set_Value (Rotatelab_ObservableValue_long__o* __this, int64_t value, const MethodInfo_185D368* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<long>$$set_Value
   void Rotatelab_ObservableValue_long___set_Value (Rotatelab_ObservableValue_long__o* __this,
   int64_t value, const MethodInfo_185D368* method); */

void Rotatelab_ObservableValue_long___set_Value_185d368
               (int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)func_0x016f9c40(*(undefined4 *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 8));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = *(code **)(*piVar1 + 0x100);
  iVar2 = (*pcVar3)(piVar1,pcVar3,param_1[2],param_1[3],param_3,param_4,
                    *(undefined4 *)(*piVar1 + 0x104));
  if (iVar2 == 0) {
    iVar2 = param_1[4];
    param_1[2] = param_3;
    param_1[3] = param_4;
    if (iVar2 != 0) {
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      (**(code **)(iVar2 + 0xc))
                (*(undefined4 *)(iVar2 + 0x20),uVar4,(int)uVar5,uVar4,*(undefined4 *)(iVar2 + 0x14))
      ;
    }
  }
  return;
}

