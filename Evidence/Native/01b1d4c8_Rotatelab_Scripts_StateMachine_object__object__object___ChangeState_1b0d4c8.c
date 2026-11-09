/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$ChangeState
void Rotatelab_Scripts_StateMachine_object__object__object___ChangeState (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject* type, const MethodInfo_1B0D4C8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$ChangeState
   void Rotatelab_Scripts_StateMachine_object__object__object___ChangeState
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, Il2CppObject* type,
   const MethodInfo_1B0D4C8* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___ChangeState_1b0d4c8
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_1fd19dc
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_2 + 0xc),&uStack_1c,
                     *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x3c));
  if (iVar1 != 0) {
    Rotatelab_Scripts_StateMachine_object__object__object___ExitCurrentState_1b0d568
              (param_1,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x44));
    *(undefined4 *)(param_1 + 0xc) = uStack_1c;
    thunk_FUN_00ec5080();
    Rotatelab_Scripts_StateMachine_object__object__object___EnterCurrentState_1b0d5ec
              (param_1,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x48));
  }
  return;
}

