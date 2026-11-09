/* IL2CPP: Rotatelab.ObservableValue<long>$$ForceInvokeOnValueChanged
void Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged (Rotatelab_ObservableValue_long__o* __this, const MethodInfo_185D848* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<long>$$ForceInvokeOnValueChanged
   void Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged
   (Rotatelab_ObservableValue_long__o* __this, const MethodInfo_185D848* method); */

void Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged_185d848(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    (**(code **)(iVar2 + 0xc))
              (*(undefined4 *)(iVar2 + 0x20),uVar1,(int)uVar3,uVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}

