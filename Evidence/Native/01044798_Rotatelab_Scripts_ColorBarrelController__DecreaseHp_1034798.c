/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$DecreaseHp
void Rotatelab_Scripts_ColorBarrelController__DecreaseHp (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$DecreaseHp
   void Rotatelab_Scripts_ColorBarrelController__DecreaseHp
   (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBarrelController__DecreaseHp_1034798(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  if (*(int *)(param_1 + 0x30) < 1) {
    return;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  Rotatelab_Scripts_ColorBarrelController__UpdateHpText_103cc84(param_1);
  uVar4 = 2;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x18),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
    uVar4 = 3;
  }
  pcVar5 = (char *)(_UNK_010446cc + 0x1044440);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446d0 + 0x1044454));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446d4 + 0x1044460));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446d8 + 0x104446c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446dc + 0x1044478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446e0 + 0x1044484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446e4 + 0x1044490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010446e8 + 0x104449c));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x2c) != 3) {
    piVar1 = *(int **)(_UNK_010446ec + 0x10444c8);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694(param_1 + 0x38,0);
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 3) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_010446f8 + 0x1044584),0,0,0);
      PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x48),0);
      PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3f333333,0);
      puVar2 = *(undefined4 **)(_UNK_010446fc + 0x10445f8);
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      uVar4 = thunk_FUN_00f00cdc(*puVar2);
      System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01044700 + 0x1044618),0);
      PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,&uStack_30,uVar4,0,0);
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      uStack_28 = uStack_58;
      uStack_24 = uStack_54;
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_30,0x3dcccccd,0);
      uStack_30 = uStack_70;
      uStack_2c = uStack_6c;
      uStack_28 = uStack_68;
      uStack_24 = uStack_64;
      uVar4 = thunk_FUN_00f00cdc(*puVar2);
      System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01044704 + 0x1044688),0);
      PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_80,&uStack_30,uVar4,0,0);
      *(undefined4 *)(param_1 + 0x48) = uStack_80;
      *(undefined4 *)(param_1 + 0x4c) = uStack_7c;
      *(undefined4 *)(param_1 + 0x50) = uStack_78;
      *(undefined4 *)(param_1 + 0x54) = uStack_74;
      thunk_FUN_00ec5080(param_1 + 0x50,0);
    }
    else {
      if (iVar3 == 2) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar2 = *(undefined4 **)(_UNK_010446f4 + 0x1044540);
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar2 = *(undefined4 **)(_UNK_010446f0 + 0x1044524);
      }
      UnityEngine_Animator__Play_35915ac(iVar3,*puVar2,0,0,0);
    }
  }
  return;
}

