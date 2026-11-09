/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$SignUpStateEvent
void Rotatelab_Scripts_StateMachine_object__object__object___SignUpStateEvent (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, System_Action_TOwner__o* action, Il2CppObject* stateType, int32_t stateEventType, const MethodInfo_1B0D728* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$SignUpStateEvent
   void Rotatelab_Scripts_StateMachine_object__object__object___SignUpStateEvent
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this,
   System_Action_TOwner__o* action, Il2CppObject* stateType, int32_t stateEventType, const
   MethodInfo_1B0D728* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___SignUpStateEvent_1b0d728
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar6;
  undefined4 unaff_r7;
  int iVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey_1fcfd10
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_3 + 0xc),
                     *(undefined4 *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 0x34));
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = System_Collections_Generic_Dictionary_int__object___get_Item_1fcfa0c
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_3 + 0xc),
                     *(undefined4 *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 0x24));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 0x58);
  switch(param_4) {
  case 0:
    piVar5 = (int *)(iVar3 + 8);
    iVar3 = *piVar5;
    break;
  case 1:
    piVar5 = (int *)(iVar3 + 0xc);
    iVar3 = *piVar5;
    break;
  case 2:
    piVar5 = (int *)(iVar3 + 0x10);
    iVar3 = *piVar5;
    break;
  case 3:
    piVar5 = (int *)(iVar3 + 0x14);
    iVar3 = *piVar5;
    break;
  default:
    return;
  }
  iVar7 = 0;
  iVar3 = System_Delegate__Combine_2bbca94
                    (iVar3,param_2,0,iVar4,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  if ((iVar3 != 0) && (iVar7 = thunk_FUN_00f00bc8(iVar3,iVar6), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar3,iVar6);
  }
  iVar4 = *(int *)(iVar4 + 0x10);
  *piVar5 = iVar7;
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
  }
  if ((iVar3 != 0) && (iVar6 = thunk_FUN_00f00bc8(iVar3,iVar4), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar3,iVar4);
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
  return;
}

