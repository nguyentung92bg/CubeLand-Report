/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$Initialize
void Rotatelab_PreBoosters_PreBooster__Initialize (Rotatelab_PreBoosters_PreBooster_o* __this, Rotatelab_Boosters_BoosterBaseData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$Initialize
   void Rotatelab_PreBoosters_PreBooster__Initialize (Rotatelab_PreBoosters_PreBooster_o* __this,
   Rotatelab_Boosters_BoosterBaseData_o* data, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__Initialize_10ec398(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  
  pcVar5 = (char *)(_UNK_010fc590 + 0x10fc3b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc594 + 0x10fc3c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc598 + 0x10fc3d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc59c + 0x10fc3dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc5a0 + 0x10fc3e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc5a4 + 0x10fc3f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc5a8 + 0x10fc400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc5ac + 0x10fc40c));
    *pcVar5 = '\x01';
  }
  piVar6 = (int *)(param_1 + 0x10);
  *piVar6 = param_2;
  thunk_FUN_00ec5080(piVar6,param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x10),0);
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = VectorSignedToFloat(*(undefined4 *)(param_2 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x30),**(undefined4 **)(_UNK_010fc5b0 + 0x10fc484),uVar10,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc5b4 + 0x10fc4ac));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar10,param_1,**(undefined4 **)(_UNK_010fc5b8 + 0x10fc4cc),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar8,uVar10,0);
  iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fc5bc + 0x10fc4fc));
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar8,*(undefined4 *)(*piVar6 + 0xc),0);
  uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc5c0 + 0x10fc544));
  System_Action_long____ctor_1f10724(uVar10,param_1,**(undefined4 **)(_UNK_010fc5c4 + 0x10fc560),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(_UNK_010fc5c8 + 0x10fc584);
  iVar1 = *(int *)(iVar8 + 0x10);
  while( true ) {
    iVar2 = System_Delegate__Combine_2bbca94(iVar1,uVar10,0);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar7), iVar3 == 0)) break;
    iVar2 = FUN_00efd180((int *)(iVar8 + 0x10),iVar3,iVar1);
    bVar9 = iVar2 == iVar1;
    iVar1 = iVar2;
    if (bVar9) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar2,iVar7);
}

