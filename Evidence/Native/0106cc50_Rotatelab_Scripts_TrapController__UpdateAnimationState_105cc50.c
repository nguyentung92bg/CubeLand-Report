/* IL2CPP: Rotatelab.Scripts.TrapController$$UpdateAnimationState
void Rotatelab_Scripts_TrapController__UpdateAnimationState (Rotatelab_Scripts_TrapController_o* __this, int32_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TrapController$$UpdateAnimationState
   void Rotatelab_Scripts_TrapController__UpdateAnimationState (Rotatelab_Scripts_TrapController_o*
   __this, int32_t state, const MethodInfo* method); */

void Rotatelab_Scripts_TrapController__UpdateAnimationState_105cc50(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0106d050 + 0x106cc6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d054 + 0x106cc80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d058 + 0x106cc8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d05c + 0x106cc98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d060 + 0x106cca4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d064 + 0x106ccb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d068 + 0x106ccbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d06c + 0x106ccc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d070 + 0x106ccd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d074 + 0x106cce0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d078 + 0x106ccec));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x18) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_0106d07c + 0x106cd18);
  *(int *)(param_1 + 0x18) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x28,0);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = *(undefined4 **)(&UNK_0106cd84 + _UNK_0106d080);
    break;
  case 2:
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x10),**(undefined4 **)(&UNK_0106cf08 + _UNK_0106d084),0,0,0);
    PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x38,0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3e4ccccd,0);
    puVar5 = *(undefined4 **)(&UNK_0106cf7c + _UNK_0106d088);
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    uVar2 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(&UNK_0106cf9c + _UNK_0106d08c),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,&uStack_30,uVar2,0,0);
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    uStack_28 = uStack_58;
    uStack_24 = uStack_54;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_30,0x3e99999a,0);
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
    uVar2 = thunk_FUN_00f00cdc(*puVar5);
    puVar5 = *(undefined4 **)(&UNK_0106d004 + _UNK_0106d090);
    goto code_r0x0106d000;
  case 3:
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = *(undefined4 **)(&UNK_0106cda0 + _UNK_0106d094);
    break;
  case 4:
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x10),**(undefined4 **)(&UNK_0106cde4 + _UNK_0106d098),0,0,0);
    PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x38,0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3e19999a,0);
    puVar5 = *(undefined4 **)(&UNK_0106ce58 + _UNK_0106d09c);
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    uVar2 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(&UNK_0106ce78 + _UNK_0106d0a0),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,&uStack_30,uVar2,0,0);
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    uStack_28 = uStack_58;
    uStack_24 = uStack_54;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_30,0x3e99999a,0);
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
    uVar2 = thunk_FUN_00f00cdc(*puVar5);
    puVar5 = *(undefined4 **)(&UNK_0106cee0 + _UNK_0106d0a4);
code_r0x0106d000:
    System_Action___ctor_2b10bac(uVar2,param_1,*puVar5,0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_80,&uStack_30,uVar2,0,0);
    *(undefined4 *)(param_1 + 0x38) = uStack_80;
    *(undefined4 *)(param_1 + 0x3c) = uStack_7c;
    *(undefined4 *)(param_1 + 0x40) = uStack_78;
    *(undefined4 *)(param_1 + 0x44) = uStack_74;
    thunk_FUN_00ec5080(param_1 + 0x40,0);
  default:
    goto LAB_0106d048;
  }
  UnityEngine_Animator__Play_35915ac(iVar3,*puVar5,0,0,0);
LAB_0106d048:
  return;
}

