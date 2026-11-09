/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnHeartsBought
void Rotatelab_Currency_UI_HeartPurchasePopup__OnHeartsBought (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, int32_t amount, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnHeartsBought
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnHeartsBought
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, int32_t amount, System_String_o* source,
   const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__OnHeartsBought_10874e8
               (int param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_88 [16];
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
  
  pcVar7 = (char *)(_UNK_01097c54 + 0x1097510);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c58 + 0x1097524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c5c + 0x1097530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c60 + 0x109753c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c64 + 0x1097548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c68 + 0x1097554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c6c + 0x1097560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c70 + 0x109756c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c74 + 0x1097578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c78 + 0x1097584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c7c + 0x1097590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c80 + 0x109759c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c84 + 0x10975a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097c88 + 0x10975b4));
    *pcVar7 = '\x01';
  }
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01097c8c + 0x10975d0));
  System_Object___ctor_2bb93bc(iVar2,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097c90 + 0x10975f8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar3 + 0x58),0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097c94 + 0x109763c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(iVar3 + 0x58);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = (**(code **)(*piVar11 + 0xf0))(piVar11,*(undefined4 *)(*piVar11 + 0xf4));
  iVar3 = (int)((ulonglong)uVar16 >> 0x20);
  (**(code **)(*piVar11 + 0xf8))
            (piVar11,iVar3,(uint)uVar16 + param_2,
             iVar3 + ((int)param_2 >> 0x1f) + (uint)CARRY4((uint)uVar16,param_2),
             *(undefined4 *)(*piVar11 + 0xfc));
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*(undefined4 *)(param_1 + 100),0);
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),0,0);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),0,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x38),0,0);
  if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x5c),0,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097c98 + 0x1097748));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar3 + 0x58),0);
  iVar5 = (int)((ulonglong)uVar16 >> 0x20);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097c9c + 0x1097790));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(iVar3 + 0x58);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar17 = (**(code **)(*piVar11 + 0x110))(piVar11,*(undefined4 *)(*piVar11 + 0x114));
  iVar3 = (int)((ulonglong)uVar17 >> 0x20);
  bVar12 = (uint)uVar16 < (uint)uVar17;
  if ((int)(iVar5 - (iVar3 + (uint)bVar12)) < 0 ==
      (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)bVar12))) {
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x3c),1,0);
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c
              (*(int *)(param_1 + 0x44),**(undefined4 **)(_UNK_01097ca0 + 0x1097828),0);
  }
  PrimeTween_Sequence__Create_2cef1e0(&uStack_78,1,0,1,0,0,0);
  fVar1 = _UNK_01097c50;
  uStack_58 = uStack_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  puVar10 = *(undefined4 **)(_UNK_01097ca4 + 0x1097880);
  while( true ) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01097cc4 + 0x109788c));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar3 + 0x58),0);
    if (iVar3 <= (int)uVar4) break;
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar4) break;
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01097ca8 + 0x10978f0));
    System_Object___ctor_2bb93bc(iVar3,0);
    iVar5 = *(int *)(param_1 + 0x28);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar6 = *(undefined4 *)(iVar5 + uVar4 * 4 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (undefined4 *)(iVar3 + 8);
    *puVar8 = uVar6;
    thunk_FUN_00ec5080(puVar8,uVar6);
    uVar6 = *puVar8;
    if (*(char *)(_UNK_01097cac + 0x1097958) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01097cb0 + 0x109796c));
      *(undefined1 *)(_UNK_01097cb4 + 0x109797c) = 1;
    }
    iVar5 = *(int *)(**(int **)(_UNK_01097cb8 + 0x1097988) + 0x5c);
    fVar13 = *(float *)(iVar5 + 0xc);
    fVar14 = *(float *)(iVar5 + 0x10);
    fVar15 = *(float *)(iVar5 + 0x14);
    if (*(int *)(**(int **)(_UNK_01097cbc + 0x10979a4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__PunchScale_2ceb894
              (&uStack_78,uVar6,fVar13 * fVar1,fVar14 * fVar1,fVar15 * fVar1,0x3dcccccd,0x41200000,1
               ,0,0,1,0,0,0,0);
    PrimeTween_Sequence__Insert_2cef8b0
              (&uStack_78,&uStack_58,0,uStack_74,uStack_78,uStack_74,uStack_70,uStack_6c,0);
    uStack_68 = uStack_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uVar6 = thunk_FUN_00f00cdc(*puVar10);
    System_Action___ctor_2b10bac(uVar6,iVar3,**(undefined4 **)(_UNK_01097cc0 + 0x1097a74),0);
    PrimeTween_Sequence__InsertCallback_2cf01e0(auStack_88,&uStack_68,0,uVar6,0,0);
    uVar4 = uVar4 + 1;
  }
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_78,&uStack_58,0x3f800000,0);
  piVar11 = (int *)(param_1 + 0x60);
  iVar3 = *piVar11;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = (int *)(iVar2 + 8);
  *piVar9 = iVar3;
  thunk_FUN_00ec5080(piVar9,iVar3);
  if (*piVar9 != 0) {
    *piVar11 = 0;
    thunk_FUN_00ec5080(piVar11,0);
    uVar6 = thunk_FUN_00f00cdc(*puVar10);
    System_Action___ctor_2b10bac(uVar6,iVar2,**(undefined4 **)(_UNK_01097cc8 + 0x1097b20),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_78,&uStack_58,uVar6,0,0);
  }
  uVar6 = thunk_FUN_00f00cdc(*puVar10);
  System_Action___ctor_2b10bac(uVar6,param_1,**(undefined4 **)(_UNK_01097ccc + 0x1097b64),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_78,&uStack_58,uVar6,0,0);
  iVar2 = *(int *)(**(int **)(_UNK_01097cd0 + 0x1097b94) + 0x74);
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar2 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_78,iVar2,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  piVar11 = *(int **)(_UNK_01097cd4 + 0x1097bd0);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  piVar11 = *(int **)(_UNK_01097cd8 + 0x1097bf0);
  iVar3 = *piVar11;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28);
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934(iVar3);
    iVar3 = *piVar11;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar2,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c),param_3,
             **(undefined4 **)(_UNK_01097cdc + 0x1097c34));
  return;
}

