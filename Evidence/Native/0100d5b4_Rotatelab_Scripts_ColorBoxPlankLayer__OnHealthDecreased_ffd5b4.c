/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$OnHealthDecreased
void Rotatelab_Scripts_ColorBoxPlankLayer__OnHealthDecreased (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t currentHp, int32_t maxHp, bool playSfx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$OnHealthDecreased
   void Rotatelab_Scripts_ColorBoxPlankLayer__OnHealthDecreased
   (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t currentHp, int32_t maxHp, bool playSfx,
   const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__OnHealthDecreased_ffd5b4
               (int param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  pcVar2 = (char *)(_UNK_0100d6c8 + 0x100d5d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d6cc + 0x100d5e8));
    *pcVar2 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x3c) = param_4;
  if ((param_3 < 1) || (*(int *)(param_1 + 0x2c) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (iVar3 < param_3) {
    iVar7 = *(int *)(param_1 + 0x24);
    if (param_2 < iVar3) {
      param_2 = iVar3 - param_2;
      iVar4 = iVar3;
      if (param_2 < iVar3) {
        iVar4 = param_2;
      }
      if (param_2 < 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar3 = func_0x00f88028(iVar7 * (param_3 - param_2),param_3 - iVar3);
      if (iVar7 < iVar3) {
        iVar3 = iVar7;
      }
      iVar4 = 0;
      iVar7 = iVar3;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x24);
    iVar4 = iVar7 + iVar3;
    iVar5 = func_0x00f88028(iVar4 * (param_3 - param_2),param_3);
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
    iVar4 = iVar5 - iVar7;
    if (iVar3 < iVar5 - iVar7) {
      iVar4 = iVar3;
    }
  }
  Rotatelab_Scripts_ColorBoxPlankLayer__ShatterNormalUpTo_fff7e4(param_1,iVar7);
  pcVar2 = (char *)(_UNK_0100fa7c + 0x100f9e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fa80 + 0x100f9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fa84 + 0x100fa00));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    if (iVar5 < iVar3) {
      puVar6 = *(undefined4 **)(_UNK_0100fa88 + 0x100fa3c);
      do {
        *(int *)(param_1 + 0x20) = iVar5 + 1;
        if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x1c),iVar5,*puVar6);
        Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank_fffa8c(param_1,uVar1);
        iVar5 = *(int *)(param_1 + 0x20);
      } while (iVar5 < iVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

