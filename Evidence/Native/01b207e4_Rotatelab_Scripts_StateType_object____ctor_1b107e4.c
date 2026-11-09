/* IL2CPP: Rotatelab.Scripts.StateType<object>$$.ctor
void Rotatelab_Scripts_StateType_object____ctor (Rotatelab_Scripts_StateType_T__o* __this, System_String_o* name, const MethodInfo_1B107E4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateType<object>$$.ctor
   void Rotatelab_Scripts_StateType_object____ctor (Rotatelab_Scripts_StateType_T__o* __this,
   System_String_o* name, const MethodInfo_1B107E4* method); */

void Rotatelab_Scripts_StateType_object____ctor_1b107e4(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 8);
  uVar1 = *(ushort *)(iVar2 + 0xbd);
  iVar3 = iVar2;
  if ((uVar1 & 1) == 0) {
    iVar3 = FUN_00efd768();
    iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 8);
    uVar1 = *(ushort *)(iVar2 + 0xbd);
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  piVar4 = *(int **)(iVar2 + 0x5c);
  *(int *)(param_1 + 0xc) = iVar3;
  *piVar4 = iVar3 + 1;
  return;
}

