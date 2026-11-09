/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot.<PlayLoop>d__27$$MoveNext
bool Rotatelab_Scripts_AutoPlayerBot__PlayLoop_d__27__MoveNext (Rotatelab_Scripts_AutoPlayerBot__PlayLoop_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot.<PlayLoop>d__27$$MoveNext
   bool Rotatelab_Scripts_AutoPlayerBot__PlayLoop_d__27__MoveNext
   (Rotatelab_Scripts_AutoPlayerBot__PlayLoop_d__27_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_AutoPlayerBot__PlayLoop_d__27__MoveNext_ff36ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01003b50 + 0x1003708);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003b54 + 0x100371c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003b58 + 0x1003728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003b5c + 0x1003734));
    *pcVar4 = '\x01';
  }
  if (5 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    puVar7 = *(undefined4 **)(&UNK_01003798 + _UNK_01003b60);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    UnityEngine_WaitForSeconds___ctor_360c704(uVar2,0x3dcccccd,0);
    puVar6 = (undefined4 *)(param_1 + 0x14);
    *puVar6 = uVar2;
    thunk_FUN_00ec5080(puVar6,uVar2);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar8 = *(float *)(iVar5 + 0x18);
    if (fVar8 <= 0.0) {
      uVar2 = *puVar6;
    }
    else {
      uVar2 = thunk_FUN_00f00cdc(*puVar7);
      UnityEngine_WaitForSeconds___ctor_360c704(uVar2,fVar8,0);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar2);
    uVar2 = UnityEngine_Camera__get_main_35aede4(0);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    thunk_FUN_00ec5080();
    goto code_r0x01003994;
  default:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    break;
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = *(int *)(**(int **)(&UNK_01003810 + _UNK_01003b68) + 0x74);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar1 == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
    if (iVar1 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Scripts_AutoPlayerBot__IsReadyToTap_ff21b8();
      if (iVar1 != 0) {
        puVar6 = *(undefined4 **)(&UNK_01003864 + _UNK_01003b6c);
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Rotatelab_Scripts_DockManager__CanPlaceBlaster_100597c
                          (iVar1,*(undefined4 *)(param_1 + 0x20),0);
        if (iVar1 != 0) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_BotClickHand__Press_ff3c00(*(int *)(iVar5 + 0x2c));
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_DockManager__TryPlaceBlaster_1005ad4
                    (iVar1,*(undefined4 *)(param_1 + 0x20),0);
          if (*(int *)(iVar5 + 0x4c) == *(int *)(iVar5 + 0x54)) {
            *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
          }
          else {
            *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x54);
            *(undefined4 *)(iVar5 + 0x50) = 1;
          }
          *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
          if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = Rotatelab_Scripts_BotClickHand__ReleaseAfterBeat_ff3c2c(*(int *)(iVar5 + 0x2c));
          *(undefined4 *)(param_1 + 0xc) = uVar2;
          thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
          uVar2 = 4;
          goto code_r0x01003918;
        }
      }
    }
    goto code_r0x01003904;
  case 4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
code_r0x01003904:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
    uVar2 = 5;
    goto code_r0x01003918;
  case 5:
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),0);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
code_r0x01003994:
  if (*(char *)(iVar5 + 0x44) != '\0') {
    *(undefined4 *)(iVar5 + 0x40) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x40),0);
    return 0;
  }
  iVar1 = Rotatelab_Scripts_AutoPlayerBot__IsReadyToTap_ff21b8();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 1;
    return 1;
  }
  uVar2 = Rotatelab_Scripts_AutoPlayerBot__ChooseBlaster_ff2304(iVar5);
  puVar6 = (undefined4 *)(param_1 + 0x20);
  *puVar6 = uVar2;
  thunk_FUN_00ec5080(puVar6,uVar2);
  uVar2 = *puVar6;
  if (*(int *)(**(int **)(&UNK_010039ec + _UNK_01003b64) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_34,iVar3,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__WorldToScreenPoint_35aea00(&uStack_34,iVar1,uStack_34,uStack_30,uStack_2c,0)
    ;
    if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_BotClickHand__MoveTo_ff3b70
                      (*(int *)(iVar5 + 0x2c),uStack_34,uStack_30,uStack_2c);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    uVar2 = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
    uVar2 = 2;
  }
code_r0x01003918:
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}

