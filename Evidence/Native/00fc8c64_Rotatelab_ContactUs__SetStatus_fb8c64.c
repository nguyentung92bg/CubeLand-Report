/* IL2CPP: Rotatelab.ContactUs$$SetStatus
void Rotatelab_ContactUs__SetStatus (Rotatelab_ContactUs_o* __this, System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ContactUs$$SetStatus
   void Rotatelab_ContactUs__SetStatus (Rotatelab_ContactUs_o* __this, System_String_o* s, const
   MethodInfo* method); */

void Rotatelab_ContactUs__SetStatus_fb8c64(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  
  pcVar4 = (char *)(_UNK_00fc8fa8 + 0xfc8c80);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8fac + 0xfc8c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8fb0 + 0xfc8ca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8fb4 + 0xfc8cac));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x2c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  piVar5 = *(int **)(param_1 + 0x2c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,param_2,*(undefined4 *)(*piVar5 + 0x2b4));
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x2c),0);
  pcVar4 = (char *)(_UNK_00fc8fb8 + 0xfc8d60);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8fbc + 0xfc8d74));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_00fc8fc0 + 0xfc8d8c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x2c),0);
  if (*(int *)(**(int **)(_UNK_00fc8fc4 + 0xfc8e14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar3,0x3f800000,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3fc00000,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x2c),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_78,uVar3,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc8fc8 + 0xfc8f48));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_00fc8fcc + 0xfc8f68),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_88,&uStack_38,uVar3,0,0);
  *(undefined4 *)(param_1 + 0x48) = uStack_88;
  *(undefined4 *)(param_1 + 0x4c) = uStack_84;
  *(undefined4 *)(param_1 + 0x50) = uStack_80;
  *(undefined4 *)(param_1 + 0x54) = uStack_7c;
  thunk_FUN_00ec5080(param_1 + 0x50,0);
  return;
}

