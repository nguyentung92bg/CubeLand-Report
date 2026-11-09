/* IL2CPP: Rotatelab.IObservableValue$$EnumerateInstances<object>
Rotatelab_Scripts_WeakReferenceListEnumerator_IObservableValue__T__o Rotatelab_IObservableValue__EnumerateInstances_object_ (const MethodInfo_14A48EC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IObservableValue$$EnumerateInstances<object>
   Rotatelab_Scripts_WeakReferenceListEnumerator_IObservableValue__T__o
   Rotatelab_IObservableValue__EnumerateInstances_object_ (const MethodInfo_14A48EC* method); */

void Rotatelab_IObservableValue__EnumerateInstances_object__14a48ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)(param_2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_014b4970 + 0x14b4910)), *(int *)(param_2 + 0x1c) == 0)) {
    FUN_00efd7c4(param_2);
  }
  piVar4 = *(int **)(_UNK_014b4974 + 0x14b4930);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  uVar2 = **(undefined4 **)(iVar1 + 0x5c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  Rotatelab_Scripts_WeakReferenceListEnumerator_object__object____ctor_1e4693c
            (param_1,uVar2,*(undefined4 *)(iVar3 + 4));
  return;
}

