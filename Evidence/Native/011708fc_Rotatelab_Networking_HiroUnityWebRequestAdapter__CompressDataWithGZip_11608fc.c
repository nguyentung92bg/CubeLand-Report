/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$CompressDataWithGZip
System_Byte_array* Rotatelab_Networking_HiroUnityWebRequestAdapter__CompressDataWithGZip (System_Byte_array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01170a78) */
/* WARNING: Removing unreachable block (ram,0x01170b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$CompressDataWithGZip
   System_Byte_array* Rotatelab_Networking_HiroUnityWebRequestAdapter__CompressDataWithGZip
   (System_Byte_array* data, const MethodInfo* method); */

undefined4
Rotatelab_Networking_HiroUnityWebRequestAdapter__CompressDataWithGZip_11608fc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_01170bc8 + 0x1170914);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170bcc + 0x1170928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170bd0 + 0x1170934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01170bd4 + 0x1170940));
    *pcVar8 = '\x01';
  }
  piVar1 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01170bd8 + 0x1170958));
  System_IO_MemoryStream___ctor_2b2420c(piVar1,0);
  piVar2 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01170bdc + 0x1170984));
  System_IO_Compression_GZipStream___ctor_31afa6c(piVar2,piVar1,1,1,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x1b0))
            (piVar2,param_1,0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*piVar2 + 0x1b4));
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01170be0 + 0x1170a18)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01170a60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar2,**(int **)(_UNK_01170be0 + 0x1170a18),0);
LAB_01170a60:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = (**(code **)(*piVar1 + 0x1e8))(piVar1,*(undefined4 *)(*piVar1 + 0x1ec));
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01170be4 + 0x1170ac8)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
          goto LAB_01170b10;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_01170be4 + 0x1170ac8),0);
LAB_01170b10:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  return uVar5;
}

