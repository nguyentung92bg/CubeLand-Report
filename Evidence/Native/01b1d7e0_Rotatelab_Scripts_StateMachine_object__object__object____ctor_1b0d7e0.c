/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$.ctor
void Rotatelab_Scripts_StateMachine_object__object__object____ctor (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, const MethodInfo_1B0D7E0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateMachine<object, object, object>$$.ctor
   void Rotatelab_Scripts_StateMachine_object__object__object____ctor
   (Rotatelab_Scripts_StateMachine_TOwner__TBaseState__TStateType__o* __this, const
   MethodInfo_1B0D7E0* method); */

int Rotatelab_Scripts_StateMachine_object__object__object____ctor_1b0d7e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar1 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Dictionary_int__object____ctor_1fcf05c
            (uVar1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x5c));
  *(undefined4 *)(param_1 + 8) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),uVar1);
  return param_1;
}

