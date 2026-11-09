/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient$$.cctor
void Rotatelab_Scripts_RemoteSolverClient___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient$$.cctor
   void Rotatelab_Scripts_RemoteSolverClient___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_RemoteSolverClient___cctor_105a7ec(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  pcVar5 = (char *)(_UNK_0106b1d4 + 0x106a7fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1d8 + 0x106a810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1dc + 0x106a81c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1e0 + 0x106a828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1e4 + 0x106a834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1e8 + 0x106a840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1ec + 0x106a84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1f0 + 0x106a858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1f4 + 0x106a864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1f8 + 0x106a870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b1fc + 0x106a87c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b200 + 0x106a888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b204 + 0x106a894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b208 + 0x106a8a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b20c + 0x106a8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b210 + 0x106a8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b214 + 0x106a8c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b218 + 0x106a8d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b21c + 0x106a8dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b220 + 0x106a8e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b224 + 0x106a8f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b228 + 0x106a900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b22c + 0x106a90c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b230 + 0x106a918));
    *pcVar5 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106b234 + 0x106a92c));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar3,**(undefined4 **)(_UNK_0106b238 + 0x106a940));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(_UNK_0106b23c + 0x106a960);
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b240 + 0x106a980);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b244 + 0x106a9f0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b248 + 0x106aa60);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b24c + 0x106aad0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b250 + 0x106ab40);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b254 + 0x106abb0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b258 + 0x106ac20);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b25c + 0x106ac90);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b260 + 0x106ad00);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b264 + 0x106ad70);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b268 + 0x106ade0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b26c + 0x106ae50);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b270 + 0x106aec0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b274 + 0x106af30);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b278 + 0x106afa0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b27c + 0x106b010);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  iVar8 = *(int *)(iVar3 + 8);
  iVar10 = *piVar9;
  uVar7 = *(uint *)(iVar3 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_0106b280 + 0x106b080);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar6 = *puVar4;
  if (iVar8 != 0) {
    if (uVar7 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar7 + 1;
      puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
      *puVar4 = uVar6;
      thunk_FUN_00ec5080(puVar4,uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    iVar8 = *(int *)(iVar3 + 8);
    iVar10 = *piVar9;
    uVar7 = *(uint *)(iVar3 + 0xc);
    puVar4 = *(undefined4 **)(_UNK_0106b284 + 0x106b0f0);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    uVar6 = *puVar4;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar7 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar7 + 1;
      puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
      *puVar4 = uVar6;
      thunk_FUN_00ec5080(puVar4,uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    iVar8 = *(int *)(iVar3 + 8);
    iVar10 = *piVar9;
    uVar7 = *(uint *)(iVar3 + 0xc);
    puVar4 = *(undefined4 **)(_UNK_0106b288 + 0x106b160);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    uVar6 = *puVar4;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar7 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar7 + 1;
      puVar4 = (undefined4 *)(iVar8 + uVar7 * 4 + 0x10);
      *puVar4 = uVar6;
      thunk_FUN_00ec5080(puVar4,uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar3,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    piVar9 = *(int **)(_UNK_0106b28c + 0x106b1b8);
    **(int **)(*piVar9 + 0x5c) = iVar3;
    uVar7 = *(uint *)(*piVar9 + 0x5c);
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + (uVar7 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((uVar7 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

