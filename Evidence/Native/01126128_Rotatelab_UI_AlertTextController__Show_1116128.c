/* IL2CPP: Rotatelab.UI.AlertTextController$$Show
void Rotatelab_UI_AlertTextController__Show (Rotatelab_UI_AlertTextController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AlertTextController$$Show
   void Rotatelab_UI_AlertTextController__Show (Rotatelab_UI_AlertTextController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_AlertTextController__Show_1116128(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01126308 + 0x1126140);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112630c + 0x1126154));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar5,1,0);
  *(undefined1 *)(param_1 + 0x28) = 1;
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x18),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (*(int *)(**(int **)(_UNK_01126310 + 0x1126204) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (&uStack_60,uVar6,0,0x3f800000,0x3e19999a,uVar1,uVar2,uVar3,uVar4,uStack_50,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_38,0x40200000,0);
  uStack_38 = uStack_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  Rotatelab_UI_AlertTextController__GetHideSequence_1116314(&uStack_80,param_1);
  PrimeTween_Sequence__Chain_2cf149c
            (&uStack_80,&uStack_38,uStack_80,uStack_7c,uStack_78,uStack_74,0);
  *(undefined4 *)(param_1 + 0x18) = uStack_80;
  *(undefined4 *)(param_1 + 0x1c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x20) = uStack_78;
  *(undefined4 *)(param_1 + 0x24) = uStack_74;
  thunk_FUN_00ec5080(param_1 + 0x20,0);
  return;
}

