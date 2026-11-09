/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$DrainFrames
void Rotatelab_Scripts_SseDownloadHandler__DrainFrames (Rotatelab_Scripts_SseDownloadHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a26f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$DrainFrames
   void Rotatelab_Scripts_SseDownloadHandler__DrainFrames (Rotatelab_Scripts_SseDownloadHandler_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_SseDownloadHandler__DrainFrames_105c968(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  pcVar7 = (char *)(_UNK_0106cb14 + 0x106c980);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106cb18 + 0x106c994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106cb1c + 0x106c9a0));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar9 + 0xd8))(piVar9,*(undefined4 *)(*piVar9 + 0xdc));
  iVar10 = 0;
  piVar11 = *(int **)(_UNK_0106cb20 + 0x106c9e8);
  piVar9 = *(int **)(_UNK_0106cb24 + 0x106c9f0);
  do {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__IndexOf_2a10e80(iVar1,*piVar11,iVar10,4,0);
    if (iVar2 < 0) {
      if (iVar10 < 1) {
        return iVar2;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        if (iVar10 < 0) {
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02a27010 + 0x2a26f5c),0,iVar10,0);
          uVar3 = thunk_FUN_00f00cdc();
          uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02a27014 + 0x2a26f70));
          uVar5 = *(undefined4 *)(_UNK_02a27018 + 0x2a26f80);
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14);
          if (iVar10 <= iVar2) {
            if (iVar2 == iVar10) {
              System_Text_StringBuilder__set_Length_2a15b14(iVar1,0);
            }
            else if (iVar10 != 0) {
              System_Text_StringBuilder__Remove_2a17038
                        (iVar1,0,iVar10,&stack0xffffffec,&stack0xffffffe8);
            }
            return iVar1;
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02a2702c + 0x2a26fbc));
          uVar3 = thunk_FUN_00f00cdc();
          uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02a27030 + 0x2a26fd0));
          uVar5 = *(undefined4 *)(_UNK_02a27034 + 0x2a26fe0);
        }
        uVar5 = thunk_FUN_00f23fd0(uVar5);
        System_ArgumentOutOfRangeException___ctor_2b0d7dc(uVar3,uVar4,uVar5,0);
        uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02a2701c + 0x2a27000));
        func_0x00ec3920(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piVar9;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = System_String__CompareOrdinal_2a08930(iVar1,iVar10,iVar6,0,*(undefined4 *)(iVar6 + 8),0)
    ;
    if (iVar6 == 0) {
      iVar6 = *piVar9;
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar6 + 8) + iVar10;
      uVar3 = System_String__Substring_2a0d5ac(iVar1,iVar10,iVar2 - iVar10,0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar8 + 0xc))(*(undefined4 *)(iVar8 + 0x20),uVar3,*(undefined4 *)(iVar8 + 0x14));
    }
    iVar10 = *piVar11;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(iVar10 + 8) + iVar2;
  } while( true );
}

