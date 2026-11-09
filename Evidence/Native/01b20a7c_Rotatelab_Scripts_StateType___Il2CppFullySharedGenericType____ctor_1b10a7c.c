/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType____ctor (Rotatelab_Scripts_StateType_T__o* __this, System_String_o* name, const MethodInfo_1B10A7C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType____ctor
   (Rotatelab_Scripts_StateType_T__o* __this, System_String_o* name, const MethodInfo_1B10A7C*
   method); */

void Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType____ctor_1b10a7c
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  System_Object___ctor_2bb93bc(param_1,0);
  (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4))(param_1,param_2);
  iVar4 = *(int *)(param_3 + 0x10);
  iVar2 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  uVar1 = *(ushort *)(iVar2 + 0xbd);
  iVar3 = iVar2;
  if ((uVar1 & 1) == 0) {
    iVar3 = FUN_00efd768();
    iVar4 = *(int *)(param_3 + 0x10);
    iVar2 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    uVar1 = *(ushort *)(iVar2 + 0xbd);
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar4 = *(int *)(param_3 + 0x10);
  }
  **(int **)(iVar2 + 0x5c) = iVar3 + 1;
                    /* WARNING: Could not recover jumptable at 0x01b20b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(*(int *)(iVar4 + 0x60) + 0xc))(param_1,iVar3);
  return;
}

