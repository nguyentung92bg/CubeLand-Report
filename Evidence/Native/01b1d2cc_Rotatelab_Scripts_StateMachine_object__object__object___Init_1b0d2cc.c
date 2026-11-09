/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$Init
void Rotatelab_Scripts_StateMachine_object__object__object___Init (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject* startStateType, System_Object_array* states, const MethodInfo_1B0D2CC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01e7ad24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$Init
   void Rotatelab_Scripts_StateMachine_object__object__object___Init
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject*
   startStateType, System_Object_array* states, const MethodInfo_1B0D2CC* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___Init_1b0d2cc
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  Rotatelab_Scripts_StateMachine_object__object__object___AddStates_1b0d3e4
            (param_1,param_3,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x10));
  iVar2 = *(int *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x18);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Dictionary_int__object___get_Item_1fcfa0c
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_2 + 0xc),
                     *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24));
  piVar3 = (int *)(param_1 + 0xc);
  *piVar3 = iVar1;
  thunk_FUN_00ec5080(piVar3,iVar1);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BaseState_object__object___RaiseEvent_1e6ad20
            (*piVar3,2,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x2c));
  piVar4 = (int *)*piVar3;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xe0))(piVar4,*(undefined4 *)(*piVar4 + 0xe4));
    if (*piVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e7ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e7ad34 + _UNK_01e7ad40))(*piVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

