/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$InitStartState
void Rotatelab_Scripts_StateMachine_object__object__object___InitStartState (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject* startStateType, const MethodInfo_1B0D314* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01e7ad24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$InitStartState
   void Rotatelab_Scripts_StateMachine_object__object__object___InitStartState
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject*
   startStateType, const MethodInfo_1B0D314* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___InitStartState_1b0d314
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
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
                     *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x24));
  piVar2 = (int *)(param_1 + 0xc);
  *piVar2 = iVar1;
  thunk_FUN_00ec5080(piVar2,iVar1);
  if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BaseState_object__object___RaiseEvent_1e6ad20
            (*piVar2,2,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x2c));
  piVar3 = (int *)*piVar2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xe0))(piVar3,*(undefined4 *)(*piVar3 + 0xe4));
    if (*piVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e7ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e7ad34 + _UNK_01e7ad40))(*piVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

