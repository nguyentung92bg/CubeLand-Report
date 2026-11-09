/* IL2CPP: Rotatelab.GameExtensions$$TryRead<object>
bool Rotatelab_GameExtensions__TryRead_object_ (Hiro_IStorage_o* storage, System_String_o* key, Il2CppObject** value, const MethodInfo_14903CC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameExtensions$$TryRead<object>
   bool Rotatelab_GameExtensions__TryRead_object_ (Hiro_IStorage_o* storage, System_String_o* key,
   Il2CppObject** value, const MethodInfo_14903CC* method); */

bool Rotatelab_GameExtensions__TryRead_object__14903cc
               (int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_1;
  iVar4 = *(int *)(*(int *)(param_4 + 0x1c) + 4);
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == *(int *)(iVar4 + 0x10)) {
        iVar1 = iVar1 + (*piVar3 + (uint)*(ushort *)(iVar4 + 0x2c)) * 8 + 0xc0;
        goto LAB_014a045c;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  iVar1 = FUN_00efdb38(param_1);
LAB_014a045c:
  iVar1 = FUN_00ec3930(*(undefined4 *)(iVar1 + 4),iVar4);
  iVar1 = (**(code **)(iVar1 + 4))(param_1,param_2,iVar1);
  *param_3 = iVar1;
  thunk_FUN_00ec5080(param_3);
  return *param_3 != 0;
}

