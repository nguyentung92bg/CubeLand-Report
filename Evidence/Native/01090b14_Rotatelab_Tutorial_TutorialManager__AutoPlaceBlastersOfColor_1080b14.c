/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$AutoPlaceBlastersOfColor
void Rotatelab_Tutorial_TutorialManager__AutoPlaceBlastersOfColor (Rotatelab_Tutorial_TutorialManager_o* __this, int32_t color, int32_t maxCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$AutoPlaceBlastersOfColor
   void Rotatelab_Tutorial_TutorialManager__AutoPlaceBlastersOfColor
   (Rotatelab_Tutorial_TutorialManager_o* __this, int32_t color, int32_t maxCount, const MethodInfo*
   method); */

void Rotatelab_Tutorial_TutorialManager__AutoPlaceBlastersOfColor_1080b14
               (undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  
  pcVar3 = (char *)(_UNK_01090ca0 + 0x1090b30);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090ca4 + 0x1090b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090ca8 + 0x1090b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090cac + 0x1090b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090cb0 + 0x1090b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090cb4 + 0x1090b74));
    *pcVar3 = '\x01';
  }
  iVar5 = 0;
  puVar4 = *(undefined4 **)(_UNK_01090cb8 + 0x1090b8c);
  puVar6 = *(undefined4 **)(_UNK_01090cbc + 0x1090b94);
  piVar7 = *(int **)(_UNK_01090cc0 + 0x1090b9c);
  while( true ) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) <= iVar5) {
      return;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) break;
    if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(iVar1 + 0xb4),iVar5,*puVar6);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar7;
      if ((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) {
        bVar8 = *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1;
        if (bVar8) {
          iVar1 = piVar2[0x43];
        }
        if (bVar8 && iVar1 == param_2) {
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_01090cc4 + 0x1090c58));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = Rotatelab_Scripts_DockManager__TryPlaceBlaster_1005ad4(iVar1,piVar2,0);
          if (iVar1 != 0) {
            param_3 = param_3 + -1;
            if (param_3 < 1) {
              return;
            }
            iVar5 = iVar5 + -1;
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

