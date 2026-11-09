/* IL2CPP: Rotatelab.ObservableValue<long>$$Rotatelab.IObservableValue.set_Value
void Rotatelab_ObservableValue_long___Rotatelab_IObservableValue_set_Value (Rotatelab_ObservableValue_long__o* __this, Il2CppObject* value, const MethodInfo_185D45C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<long>$$Rotatelab.IObservableValue.set_Value
   void Rotatelab_ObservableValue_long___Rotatelab_IObservableValue_set_Value
   (Rotatelab_ObservableValue_long__o* __this, Il2CppObject* value, const MethodInfo_185D45C*
   method); */

void Rotatelab_ObservableValue_long___Rotatelab_IObservableValue_set_Value_185d45c
               (int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*param_2 + 0x20) == *(int *)(iVar2 + 0x20)) {
    puVar1 = (undefined4 *)FUN_00ec3940(param_2);
    iVar2 = *param_1;
    (**(code **)(iVar2 + 0xf8))(param_1,iVar2,*puVar1,puVar1[1],*(undefined4 *)(iVar2 + 0xfc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(param_2,iVar2);
}

