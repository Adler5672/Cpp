auto maxFromHell(int sid, int ain) -> int {
  if (sid > ain) {
    return sid;
  } else {
    return ain;
  }
}

auto minFromHell(int sid, int ain) -> int {
  if (sid < ain) {
    return sid;
  } else {
    return ain;
  }
}