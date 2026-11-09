/* IL2CPP: BoosterPreventController$$OnBoosterStarted
void BoosterPreventController__OnBoosterStarted (BoosterPreventController_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$OnBoosterStarted
   void BoosterPreventController__OnBoosterStarted (BoosterPreventController_o* __this, int32_t
   boosterType, const MethodInfo* method); */

void BoosterPreventController__OnBoosterStarted_fa3620(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 auStack_30 [16];
  
  pcVar3 = (char *)(_UNK_00fb397c + 0xfb363c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3980 + 0xfb3650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3984 + 0xfb365c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3988 + 0xfb3668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb398c + 0xfb3674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3990 + 0xfb3680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3994 + 0xfb368c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3998 + 0xfb3698));
    *pcVar3 = '\x01';
  }
  if (param_2 != 9) {
    puVar1 = *(undefined4 **)(_UNK_00fb399c + 0xfb36b4);
    piVar4 = *(int **)(param_1 + 0x18);
    *(int *)(param_1 + 0x3c) = param_2;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(_UNK_00fb39a0 + 0xfb36ec);
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar1 = *(undefined4 **)(iVar2 + 0x5c);
    iVar5 = puVar1[1];
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar1 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar7 = *puVar1;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb39a4 + 0xfb3738));
      System_Func_object__Int32Enum__bool____ctor_239e560
                (iVar5,uVar7,**(undefined4 **)(_UNK_00fb39a8 + 0xfb3758),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
      *piVar8 = iVar5;
      thunk_FUN_00ec5080(piVar8,iVar5);
    }
    if (*(int *)(**(int **)(_UNK_00fb39ac + 0xfb3780) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                      (uVar6,param_2,iVar5,**(undefined4 **)(_UNK_00fb39b0 + 0xfb37a4));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar4 + 0x2b0))
              (piVar4,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(*piVar4 + 0x2b4));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,param_2 == 2,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
      if (*(int *)(**(int **)(_UNK_00fb39b4 + 0xfb38d4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce4a3c
                (auStack_30,uVar6,0,0x3f800000,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    }
    iVar2 = 0x34;
    iVar5 = 0x30;
    if (param_2 == 4) {
      iVar2 = 0x2c;
      iVar5 = 0x28;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610
              (*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + iVar5),
               *(undefined4 *)(param_1 + iVar2),0);
    BoosterPreventController__Show_fa3344(param_1);
  }
  return;
}

