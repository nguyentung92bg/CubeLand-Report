/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$RebuildImage
void Rotatelab_UI_SlicedFilledImage__RebuildImage (UnityEngine_U2D_SpriteAtlas_o* spriteAtlas, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$RebuildImage
   void Rotatelab_UI_SlicedFilledImage__RebuildImage (UnityEngine_U2D_SpriteAtlas_o* spriteAtlas,
   const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__RebuildImage_1122f4c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_011330d8 + 0x1132f60);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011330dc + 0x1132f74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011330e0 + 0x1132f80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011330e4 + 0x1132f8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011330e8 + 0x1132f98));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_011330ec + 0x1132fac);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (-1 < iVar1 + -1) {
    puVar7 = *(undefined4 **)(_UNK_011330f0 + 0x1132fec);
    puVar8 = *(undefined4 **)(_UNK_011330f4 + 0x1132ff4);
    do {
      iVar2 = *piVar6;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar6;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = iVar1 + -1;
      piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar2,iVar1,*puVar7)
      ;
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(piVar3);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_U2D_SpriteAtlas__CanBindTo_3646740(param_1,uVar4,0);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar3 + 400))(piVar3,*(undefined4 *)(*piVar3 + 0x194));
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar6;
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar2,iVar1,*puVar8);
      }
    } while (0 < iVar1);
  }
  return;
}

