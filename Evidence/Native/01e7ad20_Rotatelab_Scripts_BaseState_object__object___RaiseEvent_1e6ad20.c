/* IL2CPP: Rotatelab.Scripts.BaseState<object, object>$$RaiseEvent
void Rotatelab_Scripts_BaseState_object__object___RaiseEvent (Rotatelab_Scripts_BaseState_TOwner__TStateType__o* __this, int32_t eventType, const MethodInfo_1E6AD20* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseState<object, object>$$RaiseEvent
   void Rotatelab_Scripts_BaseState_object__object___RaiseEvent
   (Rotatelab_Scripts_BaseState_TOwner__TStateType__o* __this, int32_t eventType, const
   MethodInfo_1E6AD20* method); */

void Rotatelab_Scripts_BaseState_object__object___RaiseEvent_1e6ad20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    iVar1 = *(int *)(param_1 + 8);
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 0xc);
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 0x10);
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x14);
    break;
  default:
    return;
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e7ad7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

