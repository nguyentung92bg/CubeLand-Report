/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$AddStates
void Rotatelab_Scripts_StateMachine_object__object__object___AddStates (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, System_Object_array* states, const MethodInfo_1B0D3E4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$AddStates
   void Rotatelab_Scripts_StateMachine_object__object__object___AddStates
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, System_Object_array*
   states, const MethodInfo_1B0D3E4* method); */

void Rotatelab_Scripts_StateMachine_object__object__object___AddStates_1b0d3e4
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(param_2 + 0x10 + uVar2 * 4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_Dictionary_int__object___ContainsKey_1fcfd10
                      (*(int *)(param_1 + 8),*(undefined4 *)(*(int *)(iVar3 + 0x18) + 0xc),
                       *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x34));
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(iVar3 + 0x18) == 0) break;
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_int__object___Add_1fcfac4
              (*(int *)(param_1 + 8),*(undefined4 *)(*(int *)(iVar3 + 0x18) + 0xc),iVar3,
               *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x38));
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

