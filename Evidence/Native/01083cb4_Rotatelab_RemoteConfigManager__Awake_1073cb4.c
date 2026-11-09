/* IL2CPP: Rotatelab.RemoteConfigManager$$Awake
void Rotatelab_RemoteConfigManager__Awake (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$Awake
   void Rotatelab_RemoteConfigManager__Awake (Rotatelab_RemoteConfigManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_RemoteConfigManager__Awake_1073cb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar7 = (char *)(_UNK_01084088 + 0x1083ccc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108408c + 0x1083ce0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084090 + 0x1083cec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084094 + 0x1083cf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084098 + 0x1083d04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108409c + 0x1083d10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840a0 + 0x1083d1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840a4 + 0x1083d28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840a8 + 0x1083d34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840ac + 0x1083d40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840b0 + 0x1083d4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840b4 + 0x1083d58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010840b8 + 0x1083d64));
    *pcVar7 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_010840bc + 0x1083d78));
  piVar10 = *(int **)(_UNK_010840c0 + 0x1083d8c);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xe0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010840c4 + 0x1083db0));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_010840c8 + 0x1083dcc),0)
  ;
  uVar2 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar8,uVar2,**(undefined4 **)(_UNK_010840cc + 0x1083dec));
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xe0) = uVar2;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x124);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010840d0 + 0x1083e1c));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_010840d4 + 0x1083e3c),0)
  ;
  uVar2 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar8,uVar2,**(undefined4 **)(_UNK_010840d8 + 0x1083e54));
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x124) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = *(int *)(_UNK_010840dc + 0x1083e7c);
  uVar2 = **(undefined4 **)(_UNK_010840e0 + 0x1083e88);
  if (*(int *)(*(int *)(iVar1 + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar9 = 0;
  piVar10 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar2,0);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = (**(code **)(*piVar10 + 0x370))(piVar10,0x34,*(undefined4 *)(*piVar10 + 0x374));
  puVar11 = *(undefined4 **)(_UNK_010840e4 + 0x1083ee4);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar9) {
      return;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar10 = *(int **)(iVar3 + 0x10 + uVar9 * 4);
    uVar2 = *puVar11;
    if (*(int *)(*(int *)(iVar1 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar4 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar2,0);
    if (piVar10 == (int *)0x0) break;
    uVar2 = (**(code **)(*piVar10 + 0x158))(piVar10,*(undefined4 *)(*piVar10 + 0x15c));
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = (**(code **)(*piVar4 + 0x180))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x184));
    if (iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      piVar10 = (int *)(**(code **)(*piVar10 + 400))
                                 (piVar10,param_1,*(undefined4 *)(*piVar10 + 0x194));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar4 = (int *)0x0;
      if (piVar10 != (int *)0x0) {
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_010840e8 + 0x1083fc4) + 0xb8);
        if ((*(byte *)(*piVar10 + 0xb8) < uVar6) ||
           (piVar4 = piVar10,
           *(int *)(*(int *)(*piVar10 + 100) + uVar6 * 4 + -4) !=
           **(int **)(_UNK_010840e8 + 0x1083fc4))) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(piVar10);
        }
      }
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(uint *)(iVar1 + 0xc);
      piVar10 = *(int **)(_UNK_010840ec + 0x1084014);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar6 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar6 + 1;
        piVar10 = (int *)(iVar5 + uVar6 * 4 + 0x10);
        *piVar10 = (int)piVar4;
        thunk_FUN_00ec5080(piVar10,piVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,piVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
      }
      iVar1 = *(int *)(_UNK_010840f0 + 0x108406c);
      puVar11 = *(undefined4 **)(_UNK_010840f4 + 0x1084074);
    }
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

