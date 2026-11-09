/* IL2CPP: Rotatelab.Scripts.BaseState<object, object>$$SignOutEvent
void Rotatelab_Scripts_BaseState_object__object___SignOutEvent (Rotatelab_Scripts_BaseState_TOwner__TStateType__o* __this, int32_t eventType, System_Action_TOwner__o* onEvent, const MethodInfo_1E6AEA4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseState<object, object>$$SignOutEvent
   void Rotatelab_Scripts_BaseState_object__object___SignOutEvent
   (Rotatelab_Scripts_BaseState_TOwner__TStateType__o* __this, int32_t eventType,
   System_Action_TOwner__o* onEvent, const MethodInfo_1E6AEA4* method); */

void Rotatelab_Scripts_BaseState_object__object___SignOutEvent_1e6aea4
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  switch(param_2) {
  case 0:
    piVar4 = (int *)(param_1 + 8);
    iVar3 = *piVar4;
    break;
  case 1:
    piVar4 = (int *)(param_1 + 0xc);
    iVar3 = *piVar4;
    break;
  case 2:
    piVar4 = (int *)(param_1 + 0x10);
    iVar3 = *piVar4;
    break;
  case 3:
    piVar4 = (int *)(param_1 + 0x14);
    iVar3 = *piVar4;
    break;
  default:
    return;
  }
  iVar6 = 0;
  iVar3 = System_Delegate__Remove_2bbcc8c(iVar3,param_3,0);
  iVar5 = *(int *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  if ((iVar3 != 0) && (iVar6 = thunk_FUN_00f00bc8(iVar3,iVar5), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar3,iVar5);
  }
  iVar5 = *(int *)(param_4 + 0x10);
  *piVar4 = iVar6;
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 0xc);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  if ((iVar3 != 0) && (iVar6 = thunk_FUN_00f00bc8(iVar3,iVar5), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar3,iVar5);
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
  return;
}

