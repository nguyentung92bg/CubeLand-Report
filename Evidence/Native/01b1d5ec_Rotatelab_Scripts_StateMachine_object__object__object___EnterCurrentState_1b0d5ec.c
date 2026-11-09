/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$EnterCurrentState
void Rotatelab_Scripts_StateMachine_object__object__object___EnterCurrentState (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, const MethodInfo_1B0D5EC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01e7ad24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$EnterCurrentState
   void Rotatelab_Scripts_StateMachine_object__object__object___EnterCurrentState
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, const
   MethodInfo_1B0D5EC* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___EnterCurrentState_1b0d5ec
               (int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BaseState_object__object___RaiseEvent_1e6ad20
            (*(int *)(param_1 + 0xc),2,
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x2c));
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e7ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e7ad34 + _UNK_01e7ad40))(*(int *)(param_1 + 0xc));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

