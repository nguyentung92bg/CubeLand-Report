/* IL2CPP: Rotatelab.UI.UITransitionController$$Awake
void Rotatelab_UI_UITransitionController__Awake (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$Awake
   void Rotatelab_UI_UITransitionController__Awake (Rotatelab_UI_UITransitionController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_UITransitionController__Awake_112d33c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  pcVar5 = (char *)(_UNK_0113d524 + 0x113d350);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d528 + 0x113d364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d52c + 0x113d370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d530 + 0x113d37c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d534 + 0x113d388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d538 + 0x113d394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d53c + 0x113d3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d540 + 0x113d3ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d544 + 0x113d3b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d548 + 0x113d3c4));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0113d54c + 0x113d3d8));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c
            (*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_0113d550 + 0x113d400),0);
  iVar7 = *(int *)(param_1 + 0x40);
  iVar8 = *(int *)(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iVar7 + 0xc),0);
  uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar7,uVar3,**(undefined4 **)(_UNK_0113d554 + 0x113d440));
  uVar3 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_0113d558 + 0x113d45c),uVar3,
                     **(undefined4 **)(_UNK_0113d55c + 0x113d468),0);
  if (iVar8 != 0) {
    Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c(iVar8,uVar3,0);
    uVar3 = Rotatelab_UI_UITransitionController__UpdateLoaderSceneProgressbarCoroutine_112d56c
                      (param_1);
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
    piVar9 = *(int **)(_UNK_0113d560 + 0x113d4b0);
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x70);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113d564 + 0x113d4d4));
    System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_0113d568 + 0x113d4f4),0);
    uVar3 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar3,0);
    puVar4 = (undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x70);
    *puVar4 = uVar3;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

